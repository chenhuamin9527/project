print("Give me two number,, and I'll divide them.")
print("Enter 'q to quit.")

while True:
    fitst_number = input("\nFirst number: ")
    if fitst_number == 'q':
        break
    second_number = input("Seconde number: ")
    if second_number == 'q':
        break
    try:
        answer = int(fitst_number) / int(second_number)
    except ZeroDivisionError:
        print("You can't divide by 0!")
    else:
        print(answer)
