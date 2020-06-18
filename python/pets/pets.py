# pets = ['dog', 'cat', 'dog', 'goldfish', 'cat', 'rabbit', 'cat']
# print(pets)

# # while 'cat' in pets:
# #     pets.remove('cat')
# # print(pets)

# for pet in set(pets):
#     print(pet)

# 形参默认值
def describe_pet(animal_type, pet_name='willie'):
    """显示宠物的信息"""
    print("\nI have a " + animal_type + ".")
    print("My " + animal_type + "'s name is " + pet_name.title() + ".")


# 关键字实参，顺序无关紧要
describe_pet(pet_name='harry', animal_type='hamster')
