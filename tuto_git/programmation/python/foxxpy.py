#nombre est premier ou pas 
def is_prime(nb):
    if nb < 2 :
        return False
    for i in range (2,nb):
        if nb %i == 0 :
            return False
    return True  
# print(is_prime(0))
# print(is_prime(4))
# print(is_prime(10))

#Les nommbres premiers dans un intervalle donnne 
def get_primes(inf,sup):
    for i in range(inf,sup + 1):
        if is_prime(i)== True :
            print(i," ; ",end = "")
# get_primes(0,100)

#les nombres premier de sophie germain :G est premier et 2*G + 1 est premier
def is_sg_primes (nb):
    if is_prime(nb) and is_prime(2*nb + 1):
        return True
    else :
        return False
def get_list_SG_prime(inf,sup):
    list_SG_prime = []
    for i in range(inf,sup+1):
        if is_sg_primes(i):
            list_SG_prime.append(i)
    return list_SG_prime
# print(get_list_SG_prime(2,100))

#les multuples d'un nombre nb 
def get_dividers (nb):
    list_get_div = []
    for i in range(1,nb+1):
        if nb % i == 0 :
            list_get_div.append(i)
    return list_get_div
# print(get_dividers(496))

#nombres parfait 
def is_perfect(nb):
    booleen = False
    div = get_dividers(nb)
    som = 0
    for i in div :
        som = som + i 
    som = som - nb 
    if som == nb:
        booleen = True
    return booleen
# print(get_dividers(28))
# print(is_perfect(28))       

# listes de nombres parfait dans un intervalle [inf,sup]
def get_list_perfect_numbers(inf,sup):
    list_perfect_numbers =[]
    for i in range(inf,sup + 1):
        if is_perfect(i):
            list_perfect_numbers.append(i)
    return list_perfect_numbers 
# print(get_list_perfect_numbers(12,1000))

#le factoriel d'un nombre 
def fac(nb):
    if nb == 0 or nb == 1:
        p = 1
    else :
        p = 1 
        for i in range(1,nb+1):
            p = p * i
    return p
print("5! = ",fac(5))
def recursion_fac (nb):
    if nb == 0 or nb == 1 :
        return 1
    else :
        return nb*recursion_fac(nb - 1)
print("5! = ",recursion_fac(5))

#nombres espion COMME 123 : 1x2x3 = 1+2+3
def spy_numbers(nb):
 




