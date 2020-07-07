filename = 'guest.txt'

name = input("Please input your name.\n")
with open(filename, "w") as file_object:
    file_object.write(name)
