import unittest
import loops_gen as lg
import cgen as c


class TestPrint_loop_structure(unittest.TestCase):
    def test_stat_print(self):
        tested = str(lg.print_loop_structure('a', 0, 1, c.Statement("print('hello world')")))
        pattern = """for (int a = 0; a < 1; a++)
  print('hello world');"""
        self.assertEqual(tested, pattern)

    def test_stat_letter_bound(self):
        tested = str(lg.print_loop_structure('a', 'b', 'c', c.Statement("A[a] = 0")))
        pattern = """for (int a = b; a < c; a++)
  A[a] = 0;"""
        self.assertEqual(tested, pattern)


class TestGenerate_loop_index(unittest.TestCase):
    def test_index_26(self):
        self.assertEqual(lg.generate_loop_index(26), 'b')

    def test_index_0(self):
        self.assertEqual(lg.generate_loop_index(0), 'a')

    def test_index_25(self):
        self.assertEqual(lg.generate_loop_index(25), 'z')

    def test_index_41(self):
        self.assertEqual(lg.generate_loop_index(51), 'z')

class TestGenerate_array_name(unittest.TestCase):
    def test_id_26(self):
        self.assertEqual(lg.generate_array_name(26), 'A')

    def test_id_0(self):
        self.assertEqual(lg.generate_array_name(0), 'A')

    def test_id_25(self):
        self.assertEqual(lg.generate_array_name(25), 'Z')

    def test_id_41(self):
        self.assertEqual(lg.generate_array_name(51), 'Z')



if __name__ == '__main__':
    unittest.main()
