"""The example from python official doc
http://docs.python.org/2/library/unittest.html
"""
import random
import unittest


class TestGoodSeq(unittest.TestCase):
    def setUp(self):
        self.seq = range(10)

    def test_shuffle(self):
        random.shuffle(self.seq)
        self.seq.sort()
        self.assertEqual(self.seq, range(10))

        self.assertRaises(TypeError, random.shuffle, (1, 2, 3))

    def test_choice(self):
        self.assertTrue(random.choice(self.seq) in self.seq)

    def test_sample(self):
        with self.assertRaises(ValueError):
            random.sample(self.seq, 20)
        for elem in random.sample(self.seq, 5):
            self.assertTrue(elem in self.seq)


class TestGoodSeq(unittest.TestCase):
    def setUp(self):
        self.seq = range(10)

    def test_shuffle(self):
        random.shuffle(self.seq)
        self.seq.sort()
        self.assertEqual(self.seq, range(10))

        self.assertRaises(TypeError, random.shuffle, (1, 2, 3))

    def test_choice(self):
        self.assertTrue(random.choice(self.seq) in self.seq)

    def test_sample(self):
        with self.assertRaises(ValueError):
            random.sample(self.seq, 20)
        for elem in random.sample(self.seq, 5):
            self.assertTrue(elem in self.seq)

    def test_quick(self):
        self.a


if __name__ == "__main__":
    unittest.main()
