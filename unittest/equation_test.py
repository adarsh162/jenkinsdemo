import unittest
from equation_op import eq

import unittest

class TestCalc(unittest.TestCase):
    def test_add(self):
        self.assertEqual(eq.find(1,5,6),(-3,-2))
      #fails  self.assertEqual(eq.find(1,5,6),(8,1))
       
    


