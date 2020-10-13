def tree():

    print("Christmas Tree Application")
    iSize = int(input("Enter the height of your christmas tree: "))
    cTree = str(input("Enter the character you would like to use for your tree: "))

    for i in range (iSize):
        iSpace = (iSize - i) - 1
        iChars = (2 * i) + 1
        sSpace = iSpace * " "
        sChars = iChars * cTree
        print(sSpace, sChars)
    leg = (iSize - 1)  * " "
    print(leg, "||")

tree()
