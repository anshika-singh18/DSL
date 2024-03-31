class Matrices:
    def __init__(self):
        self.rows = 0
        self.columns = 0
        self.rows2 = 0
        self.columns2 = 0
        self.matrix = []
        self.matrix2 = []
        self.matrix3 = []
        self.matrix4 = []
        self.matrix5=[]

    def input_matrix(self):
        self.rows = int(input("Enter the number of rows: "))
        self.columns = int(input("Enter the number of columns: "))

        for i in range(self.rows):
            row = []
            for j in range(self.columns):
                m = int(input("Enter the elements :"))
                row.append(m)
            self.matrix.append(row)


    def display_matrix(self):

        for i in range(self.rows):
            for j in range(self.columns):

                print(self.matrix[i][j], end=" ")
            print()

    def input_matrix2(self):
        self.rows2 = int(input("Enter the number of rows: "))
        self.columns2 = int(input("Enter the number of columns: "))

        for i in range(self.rows2):
            row2 = []
            for j in range(self.columns2):
                n = int(input("Enter the elements: "))
                row2.append(n)
            self.matrix2.append(row2)


    def display_matrix2(self):
        print("Second Matrix:")
        for i in range(self.rows2):
            for j in range(self.columns2):

                print(self.matrix2[i][j], end=" ")
            print()


    def transpose(self):
        print("***************")
        print("Transpose: ")
        for i in range(self.rows):
            for j in range(self.columns):

                print(self.matrix[j][i], end=" ")
            print()
        print("***************")

    def addition(self):
        if self.rows != self.rows2 or self.columns != self.columns2:
            print("Matrices cannot be added!")

        else:
            for i in range(self.rows):
                mat3 = []
                for j in range(self.columns):
                    ad = self.matrix[i][j] + self.matrix2[i][j]
                    mat3.append(ad)
                self.matrix3.append(mat3)
                print("***************")
            print("Addition is:")
            for i in range(self.rows2):
                for j in range(self.columns2):
                    print(self.matrix3[i][j], end=" ")
                print()
            print("***************")

    def subtraction(self):
        if self.rows != self.rows2 or self.columns != self.columns2:
            print("The matrices cannot be subtracted!")
    
        else:
            for i in range(self.rows):
                mat_sub = []
                for j in range(self.columns):
                    sub = self.matrix[i][j] - self.matrix2[i][j]
                    mat_sub.append(sub)
                self.matrix4.append(mat_sub)
                print("***************")
            print("Subtraction is:")
            for i in range(self.rows2):
                for j in range(self.columns2):
                    print(self.matrix4[i][j], end=" ")
                print()
            print("***************")

    def multiplication(self):
        if self.rows2!=self.columns:
            print("Matrix cannot be multiplied!")

        else:
            for i in range(self.rows):
                row=[]
                for i in range(self.columns2):
                    row.append(0)
                self.matrix5.append(row)
            for i in range(self.rows):
                for j in range (self.columns2):
                    for k in range(self.rows2):
                        self.matrix5[i][j]+=self.matrix[i][k]*self.matrix2[k][j]

            for i in range(self.rows):
                for j in range(self.columns2):
                    print(self.matrix5[i][j], end=" ")
                print()
            print("***************")




while True:
    print("1.Addition")
    print("2.Subtraction")
    print("3.Transpose")
    print("4.Multiplication")
    print("4.EXIT")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        a = Matrices()
        a.input_matrix()
        a.display_matrix()
        a.input_matrix2()
        a.display_matrix2()
        a.addition()


    elif choice == 2:
        a = Matrices()
        a.input_matrix()
        a.display_matrix()
        a.input_matrix2()
        a.display_matrix2()
        a.subtraction()


    elif choice == 3:
        a = Matrices()
        a.input_matrix()
        a.display_matrix()
        a.transpose()

    elif choice == 4:
        a = Matrices()
        a.input_matrix()
        a.display_matrix()
        a.input_matrix2()
        a.display_matrix2()
        a.multiplication()
    
    elif choice == 5:
        print("The program ended!")
        break