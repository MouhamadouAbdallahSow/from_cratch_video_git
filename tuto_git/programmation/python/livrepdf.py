n = int(input("votre choix :"))
match n :
    case 0 :
        import keyword 
        print(keyword.kwlist)
        print(len(keyword.kwlist))
    case 1:
        mystr1= "  Hello Everyone  "
        print(mystr1)
        mystr1= "  Hello Everyone  "
        print(mystr1.rstrip())
        print(mystr1.lstrip())
        mystr1= "*********Hello******Everyone*******"
        print(mystr1.strip("*"))
    case 2:#Combining string & numbers using format method
        item1 = 40
        item2 = 55
        item3 = 77
        res = "Cost of item3 , item2 and item1 are {2} , {1} and {0}"
        print(res.format(item1,item2,item3))
    case 3:
        str2 = " WELCOME EVERYONE "
        str2 = str2.rjust(50) # Right align the string using a specific character as the 
        print(str2)

    case 4:# Odd even test
        l1 = [print("{} is Even Number".format(i)) if i%2==0 else print("{} is odd number".format(i))for i in range(10)]

    case 5:#List all numbers divisible by 3 , 9 & 12 using nested "if" with List Comprehension
        n = 200
        mylist4 = [i for i in range(n ) if i % 3 == 0 if i % 9 == 0 if i % 12 == 0]
        print(mylist4)
        #exos chaine youtube digital developpement 
    case 6: #word frequences 
        dicti = {"sow":[12,12,12],"cheikh":[13,13,13],"barhama":[14,14,14]}
        for k,v in dicti.items():
            som = 0 
            for i in range(len(v)):
                som = som + v[i]
            moy  = som /len(v)
            dicti[k] = moy
        print(dicti)
    case 7 :#etud{code , nom , age , classe , moyennee}
            etud1 = {"nom":input("Entrer votre nom:"),
                    "code":input("Entrer votre code :"),
                    "age":int(input("Votre age :")),
                    "classe":input("votre classe :"),
                    "moyenne":float(input("Votre moyenne :"))
                    }
            etud2 = {"nom":input("Entrer votre nom:"),
                    "code":input("Entrer votre code :"),
                    "age":int(input("Votre age :")),
                    "classe":input("votre classe :"),
                    "moyenne":float(input("Votre moyenne :"))
                    }
            etud3 = {"nom":input("Entrer votre nom:"),
                    "code":input("Entrer votre code :"),
                    "age":int(input("Votre age :")),
                    "classe":input("votre classe :"),
                    "moyenne":float(input("Votre moyenne :"))
                    }  
            def verifier_meme_classe():
                if etud1["classe"] == etud2["classe"] == etud3["classe"]:
                    print("Memm classe !!")
                else:
                    print("op la meme classe !!!") 
            verifier_meme_classe()  
            pgm = etud1["moyenne"]
            if etud1["moyenne"] < etud2["moyenne"]:
                pgm = etud2["moyenne"]  
                if etud2["moyenne"] < etud3["moyenne"] :
                    pgm = etud3["moyenne"]
            elif etud1["moyenne"] > etud2["moyenne"]:
                pgm = etud1["moyenne"]
                if etud1["moyenne"] < etud3["moyenne"]:
                    pgm = etud3["moyenne"]
            print(etud1)
            print(etud2)
            print(etud3)
            print("plus grande moyenne : ",pgm)
    case 8 :
        #enregistrer les informations de n = 4 modules
        modules = []
        n = 4
        for i in range(n):
            print(f"Information du module numero {i+1}")
            cd = input("Entrer votre code :")
            lib = input ("Entrer votre libelle :")
            nb_h = input("Entrer le nombre d'heure:")
            cf = input("Entrer le coeficient :")
            mod = {"code":cd,"libelle":lib,"nombre_heure":nb_h,"coefficient":cf}
            modules.append(mod)

            #afficher les informations de chaque 
        def afficher():
            print(modules)
        afficher()

        #afficher les informations du modules ayant le plus grand nombres d'heures 
        nombre_h = 0 
        max = modules[0]["nombre_heure"]
        pos_max = 0
        for i in range(1,n):
            if modules[i]["nombre_heure"] > max :
                max  = modules[i]["nombre_heure"]
                pos_max = i
        print(modules[pos_max])

        #afficher le nombre de modules ou le coef est superieur a 2 et le modules aussi 
        cpt = 0 
        print("les modules dont le coef est superieur a 2 :")
        for i in range(n):
            if modules[i]["coefficient"] > 2 :
                print(modules[i])
                cpt += 1
        print(f"le nombre de modules dont coef > 2 : {cpt}")
    case 9:#produit = {code , nom , prix ,categorie} 

        #enregistrer les informations de n produits 
        liste_prod = []
        for i in range(2):
            cd = input("Entrer le code du produit:")
            nm = input("Entrer le nom du produit :")
            px = float(input("Entrer le prix du produit:"))
            cg = input("Entrer la categorit du produit :")
            produit = {"code":cd,"nom":nm,"prix":px,"categorit":cg}
            liste_prod.append(produit)
        print(liste_prod)
        #tester si n produits ont la meme categorit 
        if liste_prod[0]["categorit"] == liste_prod[1]["categorit"] :
            print ("Meme categorit!!!")
        else :
            print("Categorit different!!!")
        #Afficher le nom du produit le plus cher 
        max_prix =  liste_prod[0]["prix"]
        pos_max = 0
        for i in range(1,2):
            if liste_prod[i]["prix"] > max_prix :
                max_prix = liste_prod[i]["prix"]
                pos_max += 1
        print(f"le produit le plus cher est : {liste_prod[pos_max]}")




                


            

        