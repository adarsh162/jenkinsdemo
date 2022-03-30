import unittest
from oe_op import oddeven

import unittest

#create a test class that inherits from unittest
class TestCalc(unittest.TestCase):
#test cases for functions we want to test for unit test
#test case method must start with test_
#assertMethod documentation 
#https://docs.python.org/3/library/unittest.html#unittest.TestCase.debug
    def test_add(self):
        self.assertEqual(oddeven.check(0),"Even")
      #fails  self.assertEqual(oddeven.check(-1),"Even")
        self.assertEqual(oddeven.check(3),"Odd")
        self.assertEqual(oddeven.check(356542),"Even")
    


