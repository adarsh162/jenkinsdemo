import unittest
from calc_op import Calc

import unittest

#create a test class that inherits from unittest
class TestCalc(unittest.TestCase):
#test cases for functions we want to test for unit test
#test case method must start with test_
#assertMethod documentation 
#https://docs.python.org/3/library/unittest.html#unittest.TestCase.debug
    def test_add(self):
        self.assertEqual(Calc.add(10,5),15)
        self.assertEqual(Calc.add(-1,5),4)
        self.assertEqual(Calc.add(-2,-25),-27)
    def test_subtract(self):
        self.assertEqual(Calc.subtract(10,5),5)
        self.assertEqual(Calc.subtract(-1,5),-6)
        self.assertEqual(Calc.subtract(-2,-25),23)
    def test_multiply(self):
        self.assertEqual(Calc.multiply(10,5),50)
        self.assertEqual(Calc.multiply(-1,5),-5)
        self.assertEqual(Calc.multiply(-2,-25),50)
    def test_divide(self):
        self.assertEqual(Calc.divide(10,5),2)
        self.assertEqual(Calc.divide(-1,5),-0.2)
        self.assertEqual(Calc.divide(-2,-25),0.08)
        self.assertRaises(ValueError, Calc.divide, 10,0)


