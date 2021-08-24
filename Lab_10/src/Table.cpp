#include"Table.h"

void Table::operator+=(const Data  t)
{
  _table.push_back(t);
  minRow = minRow < t.getVal().size() ? minRow : t.getVal().size();
}
Table & Table::sort(const unsigned num)
{
  if(minRow <= num)
	{
		std::cout<<"Indeks 3 nieprawidlowy!"<<std::endl;
		return *this;
	}

	return sortBy([num](const Data& a, const Data& b){return a.getVal()[num] < b.getVal()[num];});

}
void Table::print()const
{
  std::for_each(_table.begin(),_table.end(),[](const Data& data){data.print();});
  std::cout<<std::endl;
}
Table & Table::sortBy(std::function<bool(const Data& a, const Data& b)> check)
{
  std::sort(_table.begin(),_table.end(),check);
  return *this;
}