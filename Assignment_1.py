class sports():

    #number of students who play both cricket and badminton
    def cricbadboth(self,Alst,Blst):
        lst1=[]
        for i in Alst:
            for j in Blst:
                if i==j:
                    lst1.append(i)       
        print("Students who play both cricket and badminton are:",(lst1))



    #number of students who play either cricket or badminton
    def cricbad(self,Alst,Blst):
    #only cricket
        lst2=[]
        for i in Alst:
            if i not in Blst:
                lst2.append(i)
    # #only badminton
        lst3=[]
        for i in Blst:
            if i not in Alst:
                lst3.append(i)
        print("List of students who either play cricket or badminton is:",(lst2+lst3))


    #number of students who play neither cricket nor badminton
    def nocricbad(self,Alst,Blst):
        lst4=Alst+Blst
        lst5=[]
        for i in classlst:
            if i not in lst4:
                lst5.append(i)
        print("Students who neither play cricket nor badminton:",(lst5))



    #number of students who play cricket and football but not badminton
    def cricfootnobad(self,Alst,Blst,Clst):
        lst6=[]
        for i in Alst:
            for j in Clst:
                if i==j:
                    lst6.append(i)
                # else:
                #     continue
        lst7=[]
        for i in lst6:
            if i not in Blst:
                lst7.append(i)
        print("Students who play cricket and football but not badminton are:",(lst7))

        
    # number of students who play any of the game
    def Union(self, Alst, Blst, Clst):
        final_list = list(set().union(Alst, Blst, Clst ))
        print("Student who play any of the game: ",final_list)



    #number of students who play none of the game
    def nogame(self, Alst, Blst, Clst):
        lst8=[]
        final_list1 = list(set().union(Alst, Blst, Clst ))
        for i in classlst:
            if i not in final_list1:
                lst8.append(i)
        print("Students who play none of the game is: ",lst8)

classlst=[]                     #class list
n=int(input("Enter the number of students in the class: "))
for i in range(n):
    i=int(input("Enter the roll numbers: "))
    classlst.append(i)
print(classlst)

Alst=[]                         #cricket
m=int(input("Enter the number of students who play cricket: "))
for i in range(m):
    i=int(input("Enter the roll numbers of student who play cricket: "))
    Alst.append(i)
print(Alst)

Blst=[]                         #badminton
o=int(input("Enter the number of students who play badminton: "))
for i in range(o):
    i=int(input("Enter the roll numbers of student who play badminton: "))
    Blst.append(i)
print(Blst)

Clst=[]                         #football
p=int(input("Enter the number of students who play football: "))
for i in range(p):
    i=int(input("Enter the roll numbers of student who play football: "))
    Clst.append(i)
print(Clst)


while True:  
    print("\nMAIN MENU")  
    print("1. Students who play both cricket and badminton")  
    print("2. List of students who either play cricket or badminton")  
    print("3. Students who neither play cricket nor badminton")
    print("4. Students who play cricket and football but not badminton")
    print("5. Student who play any of the game")
    print("6. Students who play none of the game")
    print("7. EXIT")
    choice = int(input("Enter the Choice: "))
    
    if choice == 1:
        s=sports()
        s.cricbadboth(Alst,Blst)

    elif choice == 2:
        s=sports()
        s.cricbad(Alst,Blst)
                        
    elif choice == 3:
        s=sports()
        s.nocricbad(Alst,Blst)

    elif choice == 4:
        s=sports()
        s.cricfootnobad(Alst,Blst,Clst)

    elif choice == 5:
        s=sports()
        s.Union(Alst, Blst, Clst)

    elif choice == 6:
        s=sports()
        s.nogame(Alst,Blst, Clst)
             
    elif choice == 7:  
            break