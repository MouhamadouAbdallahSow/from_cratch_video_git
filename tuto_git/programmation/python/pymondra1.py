choice = int(input("Entrer le numero de l'exo :"))
match choice :
    case 1 :
        n  = int (input("le nombre de ligne :"))
        for i in range (1,n+1):
            print(i*"*")
        print("--------------deuxieme methode :------------")    
        for i in range (n):
            for j in range(i + 1):
                print("*",end= "")
            print()
