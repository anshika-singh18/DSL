class Strings():

    def longestword(self,str):
        llen=0
        count=0
        word=""
        lword=""

        for i in range(len(str)):
            if str[i]==" ":
                if llen<count:
                    lword=word
                    llen=count
                word=""
                count=0

            elif i==len(str)-1:
                word+=str[i]
                count+=1
                if llen<count:
                    lword=word
                    llen=count

            else:
                word+=str[i]
                count+=1
        print(llen)
        print(lword)      

    #finding the frequency of a character
    def frequency(self,str):
        count=0
        for i in range(len(str)):
            if str[i]==m:
                count+=1
        print("The frequency of", m, "is:", count)

    # finding if the word is a palindrome
    def palindrome(self,str):
        if str[::1]==str[::-1]:
            print("'"+str+"'", "is a palindrome!")
        else:
            print("'"+str+"'","is not a Palindrome!")

    # finding occurrence of a character in a string
    def occurence_sub(self,str):
        for i in range(len(str)):
            if str[i]==sub:
                print(i)
    
    # def occurence_word(self,str):
    #     occurence={}
    #     word=""

    #     for i in range(len(str)):
    #         if str[i]==" ":
    #             if word in occurence.keys():
    #                 occurence[word]+=1
    #             else:
    #                 occurence[word]=1
    #             word=""
            
    #         elif i==len(str)-1:
    #             word+=str[i]
    #             if word in occurence.keys():
    #                 occurence[word]+=1
    #             else:
    #                 occurence[word]=1

    #         else:
    #             word+=str[i]


    def occurence_word(self,str):
        occurence={}
        word=""

        for i in range(len(str)):
            if str[i]==" ":
                if word in occurence.keys():
                    occurence[word]+=1
                else:
                    occurence[word]=1
            elif i==len(str)-1:
                word+=str[i]


while True:
    print("1: Find the longest in a string.")
    print("2: Find the frequency of a character in a string.")
    print("3: Find if the string is a palindrome.")
    print("4: Find the occurrence of a character in a string.")
    print("5: Find the occurrence of each word in a string.")
    print("6: EXIT.")
    choice=int(input("Enter your choice: "))

    if choice==1:
        str=input("Enter a string: ")
        obj=Strings()
        obj.longestword(str)

    elif choice==2:
        str=input("Enter a string: ")
        m=input("Enter the character whose frequency is to be calculated: ")
        obj=Strings()
        obj.frequency(str)

    elif choice==3:
        str=input("Enter a string: ")
        obj=Strings()
        obj.palindrome(str)

    elif choice==4:
        str=input("Enter a string: ")
        sub=input("Enter a character: ")
        obj=Strings()
        obj.occurence_sub(str)

    elif choice==5:
        str=input("Enter a string: ")
        obj=Strings()
        obj.occurence_word(str)

    elif choice==6:
        break