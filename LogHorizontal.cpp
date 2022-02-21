#include "LogHorizontal.h"
#include "Ilog.h"
#include "include.h"

LogHorizontal::LogHorizontal(string& path)
{
	ifstream file(path);
	if (!file.is_open()) { cout << "ERROR : file open failed." << endl; }
	else
	{
		regex re(",");
		string line;
		while ( getline(file, line) )
		{
			auto itr = sregex_token_iterator(begin(line), end(line), re, -1);
			auto itr_end = sregex_token_iterator();
			while (itr != itr_end)
			{
				cout << *itr << " ";
				++itr;
			}

		}
	}
	// �ϴ� ������ ���� �� vector<vector<string>>, �� ���̺� ���� ��Ƴ���,
	// move �� table_�� �ű�°� ������.
	// x, y ��Ī ��Ű��.
	// ���� : �ش� ���α׷��� ��� �α״� index : value �� ���� ������. ��, �ݵ�� TableŸ��
	// ���� �����͸� ������ �ʿ�� ����. -> ��� �����͸� unordered_map���� �ٲ��� ����غ� ��.
	// �׷��� HorizontalLog�� �����ڿ��� ��� TableŸ�Կ� �����س��� ���ư��鼭 move�� map�� ���� �� �ִ�.

	// unordered_map �� ������ : ������ ����.(���׹����̴�.)
} 