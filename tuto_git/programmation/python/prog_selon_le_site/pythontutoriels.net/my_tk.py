import tkinter as tk
from tkinter import ttk

def select(option):
    print(option)

def button_clicked():
    print("button cliked")

def return_pressed(event):
    print('Return key pressed')

def log(event):
    print(event)
root = tk.Tk()
root.title('Tkinter Window Demo')
root.geometry('600x400+50+50')
root.resizable(False, False)
root.attributes('-alpha', 1.0)
ttk.Label(root,text = 'hi everyone').pack()
label = ttk.Label(root)
label['text'] = 'Hi, there'
label.pack()


but = ttk.Button(root,text = "click me ",command=button_clicked)
but.pack()

ttk.Button(root,text = "rock",command=lambda:select("rock")).pack()
ttk.Button(root,text = "papers",command=lambda:select("papers")).pack()
ttk.Button(root,text = "ept",command=lambda:select("ept")).pack()

btn = ttk.Button(root,text = "save")
btn.bind('<Return>',return_pressed)
btn.bind('<Return>',log,add="+")
btn.focus()
btn.pack(expand=True)

# root.iconbitmap('OIP.jpeg')#converet to ico 
root.mainloop()