
balance = 3000

def buy_things(items, price):
    global balance
    balance = balance - price
    print(f'Balance after buying {items} is', balance)

buy_things('sunglassess', 1000)