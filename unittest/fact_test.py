import unittest
from fact_op import fact

import unittest

#create a test class that inherits from unittest
class TestCalc(unittest.TestCase):
#test cases for functions we want to test for unit test
#test case method must start with test_
#assertMethod documentation 
#https://docs.python.org/3/library/unittest.html#unittest.TestCase.debug
    def test_add(self):
        self.assertEqual(fact.find(2),2)
      #fails  self.assertEqual(fact.find(3),8)
        self.assertEqual(fact.find(4),24)
        self.assertEqual(fact.find(5),120)
        self.assertRaises(ValueError,fact.find,-1)
    


