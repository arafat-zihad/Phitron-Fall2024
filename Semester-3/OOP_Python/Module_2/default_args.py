# def sum(num1, num2):
#     result = num1 + num2
#     return result

# total = sum(39,29)
# print(total)

# if you want to take 2 parameter in 3 arugument
def sum(num1, num2, num3 = 0):
    result = num1 + num2
    return result

total = sum(39,29)
# print(total)

# args = take many arguments out of range:
def sum(*args):
    print(args)

sum(49, 83, 29)