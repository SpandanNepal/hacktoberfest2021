from tkinter import Tk, Entry, Label, DoubleVar, StringVar, IntVar, Radiobutton,Button

class Tipcalculator:
    def __init__(self):
        window = Tk()
        window.title('Tip Calculator')
        window.configure(background='silver')
        window.geometry("350x250")
        window.resizable(width=False, height=False)


        self.meal_cost = StringVar()
        self.tip_percent = IntVar()
        self.tip = StringVar()
        self.total_cost = StringVar()

        tip_percents = Label(window, text='Tip Percentages', bg='black', fg='white')
        tip_percents.grid(column=0,row=0,padx=15,pady=20)

        bill_amount = Label(window, text='Bill Amount', bg='black', fg='white')
        bill_amount.grid(column=1,row=0,padx=15)

        bill_amount_entry = Entry(window, textvariable=self.meal_cost, width =15)
        bill_amount_entry.grid(column=2,row=0,padx=15)

        five_percent = Radiobutton(window, text='5%', variable=self.tip_percent, value=5)
        five_percent.grid(column=0,row=1)
        ten_percent = Radiobutton(window, text='10%', variable=self.tip_percent, value=10)
        ten_percent.grid(column=0, row=2)
        fifteen_percent = Radiobutton(window, text='15%', variable=self.tip_percent, value=15)
        fifteen_percent.grid(column=0, row=3)
        twenty_percent = Radiobutton(window, text='20%', variable=self.tip_percent, value=20)
        twenty_percent.grid(column=0, row=4)
        t5_percent = Radiobutton(window, text='25%', variable=self.tip_percent, value=25)
        t5_percent.grid(column=0, row=5)
        t30_percent = Radiobutton(window, text='30%', variable=self.tip_percent, value=30)
        t30_percent.grid(column=0, row=6)


        tip_amt_lbl = Label(window, text="Tip Amount", bg='black', fg='white')
        tip_amt_lbl.grid(column=1,row=2,padx=10)
        tip_amt_entry = Entry(window, textvariable = self.tip, width = 15)
        tip_amt_entry.grid(column=2,row=2,padx=10)

        bill_amt_lbl = Label(window, text="Bill Total", bg='black', fg='white')
        bill_amt_lbl.grid(column=1, row=4, padx=10)
        bill_amt_entry = Entry(window, textvariable=self.total_cost, width=15)
        bill_amt_entry.grid(column=2, row=4, padx=10)

        calculate_but = Button(window, text='Calculate', bg='green', fg='white', command=self.calculate )
        calculate_but.grid(column=1,row=6)

        clear_but = Button(window, text='Clear', bg='red', fg='white', command=self.clear)
        clear_but.grid(column=2, row=6)
        window.mainloop()


    def calculate(self):
        pre_tip = float(self.meal_cost.get())
        percentage = self.tip_percent.get() / 100
        tip_amt_entry = pre_tip * percentage
        self.tip.set(tip_amt_entry)
        final_bill = pre_tip + tip_amt_entry
        self.total_cost.set(final_bill)

    def clear(self):
        self.meal_cost.set('')
        self.tip.set('')
        self.total_cost.set('')

Tipcalculator()
