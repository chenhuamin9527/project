class Restaurant():
    def __init__(self, restaurant_name, cuisine_type, number_served=0):
        self.name = restaurant_name
        self.type = cuisine_type
        self.number_served = number_served

    def describe_restautant(self):
        print("My restaurant's name is " + str(self.name) + ".")
        print("My restaurant is a " + str(self.type) + "restaurant.")

    def open_restaurant(self):
        print("The restaurant is opening")

    def set_number_served(self, number_served):
        self.number_served = number_served


my_restaurant = Restaurant('huamin', 'rice')
my_restaurant.describe_restautant()
my_restaurant.open_restaurant()
my_restaurant.set_number_served(10)
print(my_restaurant.number_served)
