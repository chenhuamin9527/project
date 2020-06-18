cars = ['bmw', 'audi', 'toyota', 'subaru']
print("here is the original list:")
print(cars)

for car in cars:
    if car == 'bmw':
        print(car.upper())
    else:
        print(car.title())
