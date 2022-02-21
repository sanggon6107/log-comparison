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
	// 일단 파일을 읽을 때 vector<vector<string>>, 즉 테이블에 전부 담아놓고,
	// move 로 table_에 옮기는게 나을듯.
	// x, y 대칭 시키자.
	// 참고 : 해당 프로그램의 대상 로그는 index : value 의 값을 가진다. 즉, 반드시 Table타입
	// 으로 데이터를 저장할 필요는 없다. -> 멤버 데이터를 unordered_map으로 바꿀지 고려해볼 것.
	// 그러면 HorizontalLog의 생성자에서 잠시 Table타입에 저장해놓고 돌아가면서 move로 map에 넣을 수 있다.

	// unordered_map 의 문제점 : 순서가 없다.(뒤죽박죽이다.)
} 