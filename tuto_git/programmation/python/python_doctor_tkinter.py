# coding utf-8
from tkinter import *
fenetre = Tk()


# label = Label(fenetre,text = "Hello world")
# label.pack()


#crerr un bouton 
# boutton = Button(fenetre,text = "Fermer",command = fenetre.quit)
# boutton.pack()


# label = Label(fenetre, text = "Texte Par Defaut ",bg = "yellow")


#entrer/input
# value = StringVar()
# # value.set("Texte par defaut")
# entree = Entry(fenetre,textvariable = str,width = 30 )
# entree.pack()


#case a cocher 
# cocher = Checkbutton(fenetre,text = "muslim")
# cocher.pack()


# #button radio
# value = StringVar()
# bouton1 = Radiobutton(fenetre,text = "Oui",variable = value, value = 1)
# bouton2 = Radiobutton(fenetre,text = "Non",variable = value, value = 2)
# bouton3 = Radiobutton(fenetre,text = "peut etre",variable = value, value = 3)
# bouton1.pack()
# bouton2.pack()
# bouton3.pack()


# #les listes --->>> Listbox()
# liste = Listbox(fenetre)
# liste.insert(1,"Python")
# liste.insert(2,"PHP")
# liste.insert(3,"jQuery")
# liste.insert(4,"CSS")
# liste.insert(5,"Javascript")
# liste.pack()


#canvas
# canvas = Canvas(fenetre,width = 150, height = 120 ,background = 'yellow')
# ligne1 = canvas.create_line(75,0,75,120)
# ligne2= canvas.create_line(0,60,150,60)
# txt = canvas.create_text(75,60,text = "Cible",font = "Arial 16 italic",fill = "blue")
# canvas.pack()


# Le widget scale permet de récupérer une valeur numérique via un scroll
# value = DoubleVar()
# scale = Scale(fenetre,variable = value)
# scale.pack()


# les frames :()
# #frame1
# Frame1 = Frame(fenetre ,borderwidth = 2 ,relief = GROOVE)
# Frame1.pack(side = LEFT ,padx = 30 , pady = 30)

# #frame 2
# Frame2 = Frame(fenetre ,borderwidth = 2 ,relief = GROOVE)
# Frame2.pack(side = LEFT ,padx = 10 , pady = 10)

# #frame 3 dans le frame 2
# Frame3 = Frame(Frame2 ,bg = "blue",borderwidth = 2 ,relief = GROOVE)
# Frame3.pack(side = RIGHT ,padx = 5 , pady = 5)

# #AJOUT DES LABELS 
# Label(Frame1,text = "le frame 1").pack(padx = 10, pady = 10)
# Label(Frame2,text = "le frame 2").pack(padx = 10, pady = 10)
# Label(Frame3,text = "le frame 3",bg = "blue").pack(padx = 10, pady = 10)

#pannedWindow
#Le panedwindow est un conteneur qui peut contenir autant de panneaux 
# que nécessaire disposé horizontalement ou verticalement.
# p = PanedWindow(fenetre, orient=HORIZONTAL)
# p.pack(side=TOP, expand=Y, fill=BOTH, pady=2, padx=2)
# p.add(Label(p, text='Volet 1', background='blue', anchor=CENTER))
# p.add(Label(p, text='Volet 2', background='white', anchor=CENTER) )
# p.add(Label(p, text='Volet 3', background='red', anchor=CENTER) )
# p.pack()


# Spinbox
# La spinbox propose à l'utilisateur de choisir un nombre
# s = Spinbox(fenetre, from_=0, to=10)
# s.pack()


# LabelFrame
# Le labelframe est un cadre avec un label.
# l = LabelFrame(fenetre, text="Titre de la frame", padx=20, pady=20)
# l.pack(fill="both", expand="yes")
# Label(l, text="A l'intérieure de la frame").pack()


#les Alertes 
# showinfo()
# showwarning()
# showerror()
# askquestion()
# askokcancel()
# askyesno()
# askretrycancel()
# from tkinter.messagebox import *

# def callback():
# 	if askyesno('titre 1','etes_vous sur de vouloir faire ca ?'):
# 		showwarning('titre 2 ','tant pis...')
# 	else :
# 		showinfo('titre 3','vous avez peur !!')
# 		showerror('titre 4 ','aha')

# Button(text  = 'action',command = callback).pack()


#Barre de menu 
def alert():
	showinfo('alerte','bravo')

menubar = Menu(fenetre)

menu1 = Menu(menubar,tearoff = 0)
menu1.add_command(label = "Creer",command = alert)
menu1.add_command(label = "Editer",command = alert)
menu1.add_separator()
menu1.add_command(label = "Quitter",command = fenetre.quit)
menubar.add_cascade(label = 'Fchier',menu = menu1)

menu2 = Menu(menubar,tearoff = 0)
menu2.add_command(label = "Copier",command = alert)
menu2.add_command(label = "couper",command = alert)
menu2.add_separator()
menu2.add_command(label = "coller",command = alert)
menubar.add_cascade(label = 'editer',menu = menu2)

menu3= Menu(menubar,tearoff = 0)
menu3.add_command(label = "A propos",command = alert)
menubar.add_cascade(label = 'Aide',menu = menu1)

fenetre.config(menu = menubar)

# placer des widgets avec side 
#side = TOP --> HAUT
#side = LEFT --->GAUCHE
#side = BOTTOM ---> BAS
#side = RIGHT ----> DROITE

































fenetre.mainloop()












