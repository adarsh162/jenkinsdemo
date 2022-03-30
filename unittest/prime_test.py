import unittest
from prime_op import prime

import unittest

#create a test class that inherits from unittest
class TestCalc(unittest.TestCase):
#test cases for functions we want to test for unit test
#test case method must start with test_
#assertMethod documentation 
#https://docs.python.org/3/library/unittest.html#unittest.TestCase.debug
    def test_add(self):
        self.assertEqual(prime.check(2),"Prime")
      #fails  self.assertEqual(prime.check(-1),"Non-Prime")
        self.assertEqual(prime.check(10),"Non-Prime")
        self.assertEqual(prime.check(5),"Prime")
        self.assertRaises(ValueError,prime.check,1)
    


