class Sorting:


    def insertionSort(self, arr):
        for i in range (1,len(arr)):
            key=arr[i]
            j=i-1

            while j>=0 and key<arr[j]:
                arr[j+1]=arr[j]
                j-=1
            arr[j+1]=key


    # def shellSort(self, array, n):
    #     interval = n // 2
    #     while interval > 0:
    #         for i in range(interval, n):
    #             key = array[i]
    #             j = i
    #             while j >= interval and array[j - interval] > key:
    #                 array[j] = array[j - interval]
    #                 j -= interval

    #             array[j] = key
    #         interval //= 2


    def shellSort(self,arr,n):
        interval=n//2
        while interval>0:
            for i in range(interval,n):
                key=arr[i]
                j=i
                while j>=0 and key<arr[j-interval]:
                    arr[j]=arr[j-interval]
                    j-=interval
                arr[j]=key
            interval//=2





while True:
    print("1. Insertion Sort")
    print("2. Shell Sort")
    print("3. EXIT!")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        s = Sorting()
        arr = []
        a = int(input("Enter of elements in the array: "))
        for i in range(a):
            ele = int(input("Enter elements of the array: "))
            arr.append(ele)
        s.insertionSort(arr)
        print("The insertion sorted array is: ")
        print(arr)

    elif choice == 2:
        s = Sorting()
        data = []
        n = int(input("Enter number of elements of the array: "))
        for i in range(n):
            ele = int(input("Enter elements of the array: "))
            data.append(ele)
        s.shellSort(data, n)
        print("The shell sorted array is: ")
        print(data)

    elif choice == 3:
        print("The program ended!")
        break