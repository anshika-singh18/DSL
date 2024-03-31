class Search_roll:

    def __init__(self):

        self.roll_no = []
        self.sort = []
        self.length = 0
        self.sentinel = []
        self.key = 0

    def input(self):

        self.length = int(input("Enter students who attended the program: "))

        for i in range(0, self.length):
            roll = int(input("Enter the roll number of the students: "))
            self.roll_no.append(roll)
        print("The students who attended the training program are :", self.roll_no)

    # LINEAR SEARCH
    def linear_search(self):
        n = int(input("Enter the value to be found: "))
        count = 1
        for i in range(0, self.length):
            if self.roll_no[i] == n:
                print("The entered value is at index:", i)
                break

            else:
                count += 1
        print("Total no of comparisons is/are :", count)

    # SENTINEL SEARCH
    def sentinel_search(self):
        m = int(input("Enter the value to be searched: "))

        i = 0
        while self.roll_no[i] != self.roll_no[self.length - 1]:
            i += 1

        if (i < self.length - 1) or (self.roll_no[i] == self.roll_no[self.length - 1]):
            print("Position is:", i-1)
        else:
            print("Element not found!")

    # BINARY SEARCH
    def binary_search(self, key):

        sortedlist = self.roll_no.copy()
        sortedlist.sort()
        print(sortedlist)

        first = 0
        last = self.length - 1
        while first <= last:

            mid = first + (last - first) // 2
            if sortedlist[mid] == key:
                return mid
            elif key > sortedlist[mid]:
                first = mid + 1
            else:
                last = mid - 1
        return -1



    def fibMonaccianSearch(self, arr, x, n): 
        f0 = 0  
        f1 = 1  
        f2 = f0 + f1 
    
        while (f2 < n): 
            f0 = f1 
            f1 = f2 
            f2 = f0 + f1 

        offset = -1; 

        while (f2 > 1):
            i = min(offset+f0, n-1) 
    
            if (arr[i] < x): 
                f2 = f1 
                f1 = f0 
                f0 = f2 - f1 
                offset = i 
    
            elif (arr[i] > x): 
                f2 = f0 
                f1 = f1 - f0 
                f0 = f2 - f1 

            else : 
                return i 
    

        if(f1 and arr[offset+1] == x): 
            return offset+1; 
    
    
        return -1
  


while True:

    print("1.Linear Search")
    print("2.Sentinel Search")
    print("3.Binary Search")
    print("4.Fibonacci Search")
    print("5.EXIT")

    c = int(input("Enter your choice: "))

    if c == 1:
        a = Search_roll()
        a.input()
        a.linear_search()

    elif c == 2:
        a = Search_roll()
        a.input()
        a.sentinel_search()

    elif c == 3:
        a = Search_roll()
        a.input()
        key = int(input("Enter the key to be found: "))
        p = a.binary_search(key)
        if p == -1:
            print("Element not found")
        else:
            print("Element found at position:", p)

    elif c == 4:
        a=Search_roll()
        arr = [] 
        n = int(input("Enter total: "))
        for i in range(n):
            ele=int(input("roll: "))
            arr.append(ele)

        sorted_list=arr.copy()
        sorted_list.sort()
        print("Sorted list: ", sorted_list)

        x = int(input("Enter searching element: "))
        print("Found at index:", a.fibMonaccianSearch(sorted_list, x, n))   

    elif c == 5:
        print("The program ended!")
        break



