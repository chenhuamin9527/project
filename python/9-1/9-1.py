class Restaurant():
    def __init__(self, restaurant_name, cuisine_type):
        self.name = restaurant_name
        self.type = cuisine_type

    def describe_restautant(self):
        print("My restaurant's name is " + str(self.name) + ".")
        print("My restaurant is a " + str(self.type) + "restaurant.")

    def open_restaurant(self):
        print("The restaurant is opening")


my_restaurant = Restaurant('huamin', 'rice')
my_restaurant.describe_restautant()
my_restaurant.open_restaurant()
