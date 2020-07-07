import unittest
from city_functions import city_function


class CityTest(unittest.TestCase):
    def test_name(self):
        name = city_function('santiago', 'Chile')
        self.assertEqual(name, "Santiago,Chile")


unittest.main()
