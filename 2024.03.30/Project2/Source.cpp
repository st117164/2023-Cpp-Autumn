#include<iostream>

struct SEdge {
	int a;
	int b;
	int w;
	SEdge(int a = 0, int b = 0, int w = 1) : a(a), b(b), w(w) {}
	~SEdge() {}
	void set(int a, int b, int w)
	{
		this->a = a;
		this->b = b;
		this->w = w;
	}
};

class CGraph {
public:


	int getEdgesCountFromMatrix();
	void CreateMatrix();

	void set(int _vertexes);
	void set1(int _vertexes, int edges);

	void countOfSwetofor();

	void createColorMassiv();
	void ploxieMosti();

	void shtirlezBegaet();
	int derevo();

	void createMatrixFromEdges();
	void countOfPlanets();

	void getEdgesFromMatrix();

	void printMatrix();
	void printMatrix1();

	void task8();
	void createMatrixFromEdges7();

	void obratnayaK8();
	void vesVershin();

	void regular();

	void orientirovannost();

	void polniy();

	void istociIstoci();
	void turnir();

	CGraph() {}
	CGraph(int vertexes, int edges)
	{

	}
	~CGraph()
	{
		for (int i = 0; i < _vertexes; i++)
		{
			for (int i = 0; i < _vertexes; i++) {
				free(_matrix[i]);
			}
			free(_matrix);
		}
		delete[]_color;
	}

private:
	int _vertexes;
	int _edges;
	int** _matrix;
	int* _color;
	SEdge* _edge;
	
};

int main(int argc, char* argv[])
{
	std::cout << "choose what problem you want to solve"<<std::endl;
	int N = 1;
	std::cin >> N;

	CGraph Graph;
	int vertexes = 0;
	int edges = 0;

	switch (N) {
	case 1:
		
		std::cin >> vertexes;

		Graph.set(vertexes);
		Graph.CreateMatrix();

		std::cout << "solution to the first problem:" << Graph.getEdgesCountFromMatrix();
	case 2:

		std::cin >> vertexes >> edges;
		Graph.set1(vertexes, edges);
		Graph.countOfSwetofor();

		std::cout << "solution to the second problem:";
	case 3:

		std::cin >> vertexes;

		Graph.set(vertexes);
		Graph.CreateMatrix();
		Graph.createColorMassiv();
		Graph.ploxieMosti();
	case 4:

		std::cin >> vertexes;

		Graph.set(vertexes);
		Graph.CreateMatrix();
		Graph.shtirlezBegaet();
	case 5:
		Graph.derevo();
	case 6:

		std::cin >> vertexes;

		Graph.set(vertexes);
		Graph.createMatrixFromEdges();
		Graph.countOfPlanets();
	
	case 7:

		std::cin >> vertexes;

		Graph.set(vertexes);
		Graph.CreateMatrix();
		Graph.getEdgesFromMatrix();
	case 8:

		std::cin >> vertexes;
		std::cin >> edges;
		Graph.set1(vertexes, edges);
		Graph.createMatrixFromEdges7();
		Graph.task8();
	case 9:
		std::cin >> vertexes;
		Graph.set(vertexes);
		Graph.obratnayaK8();
		Graph.printMatrix1();
	case 10:
		std::cin >> vertexes;
		Graph.set(vertexes);
		Graph.CreateMatrix();
		Graph.vesVershin();
	case 11:
		std::cin >> vertexes;
		Graph.set(vertexes);
		Graph.CreateMatrix();
		Graph.regular();
	case 12:
		std::cin >> vertexes;
		Graph.set(vertexes);
		Graph.CreateMatrix();
		Graph.orientirovannost();
	case 13:
		std::cin >> vertexes;
		std::cin >> edges;
		Graph.set1(vertexes, edges);
		Graph.createMatrixFromEdges7();
		Graph.polniy();
	case 14:
		std::cin >> vertexes;
		Graph.set(vertexes);
		Graph.CreateMatrix();
		Graph.istociIstoci();
	case 15:
		std::cin >> vertexes;
		std::cin >> edges;
		Graph.set1(vertexes, edges);
		Graph.createMatrixFromEdges7();
		Graph.turnir();
	case 16:
		Graph.derevo();
	}

}

void CGraph::turnir()
{
	int n = 0;

	for (int i = 1; i <= _vertexes; i++)
	{
		for (int j = 1; j <= _vertexes; j++)
		{
			if (_matrix[i][j] == 1 && _matrix[j][i] == 1 && i != j)
			{
				std::cout << "NO";
				n = 1;
				break;
			}
		}
		if (n == 1)
		{
			break;
		}
	}
	if (n != 1) {
		for (int i = 1; i <= _vertexes; i++)
		{
			for (int j = 1; j <= _vertexes; j++)
			{
				if (_matrix[i][j] == 1 && _matrix[j][i] == 1 && i != j)
				{
					std::cout << "NO";
					n = 1;
					break;
				}
			}
			if (n == 1)
			{
				break;
			}
		}
	}
	if (n != 1)
	{
		std::cout << "YES";
	}
}

void CGraph::istociIstoci()
{
	int n = 0,count =0;

	for (int i = 0; i < _vertexes; i++)
	{
		n = 0;
		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[i][j] != 0)
			{
				n = 1;
				
			}
		}
		if (n == 0)
		{
			count++;
		}
	}
	std::cout << count << " ";

	for (int i = 0; i < _vertexes; i++)
	{
		n = 0;
		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[i][j] != 0)
			{
				n = 1;
				
			}
		}
		if (n == 0)
		{
			std::cout << i +1<< " ";
		}
	}
	std::cout << std::endl;
	count = 0;
	for (int i = 0; i < _vertexes; i++)
	{
		n = 0;
		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[j][i] != 0)
			{
				n = 1;
			}
		}
		if (n == 0)
		{
			count++;
		}
	}
	std::cout << count << " ";

	for (int i = 0; i < _vertexes; i++)
	{
		n = 0;
		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[j][i] != 0)
			{
				n = 1;
			}
		}
		if (n == 0)
		{
			std::cout << i+1 << " ";
		}
	}
}

void CGraph::polniy()
{
	int n = 0;

	for (int i = 0; i < _vertexes; i++)
	{
		n = 0;
		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[i][j] == 0 && _matrix[j][i] == 0 && j != i)
			{
				std::cout << "NO";
				n = 1;
				break;
			}
		}
		if (n == 1)
			break;
	}
	if (n != 1)
		std::cout << "YES";
}

void CGraph::orientirovannost()
{

	int n = 0;

	for (int i = 0; i < _vertexes; i++)
	{

		for (int j = 0; j < _vertexes; j++)
		{
			if ((_matrix[i][j] != _matrix[j][i])&&(j!=i)) {
				std::cout << "YES";
				n = 1;
				break;
			}
		}
		if (n == 1)
			break;

	}

	if(n!=1)
	std::cout << "NO";
}

void CGraph::regular()
{
	int* mat;
	mat = new int [_vertexes + 1];

		for (int i = 0; i < _vertexes; i++)
		{
			int c = 0;

			for (int j = 0; j < _vertexes; j++)
			{
				if (_matrix[i][j] == 1) {
					c++;
				}
			}

			mat[i] = c;
		}

		int l = 0;

		for (int i = 0; i < _vertexes; i++)
		{
			if (mat[0] != mat[i])
			{
				std::cout << "NO";
				l = 1;
			}
		}

		if (l != 1)
		{
			std::cout << "YES";
		}
		delete[]mat;
}

void CGraph::vesVershin() 
{
	for (int i = 0; i < _vertexes; i++)
	{
		int c = 0;

		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[i][j] == 1) {
				c++;
			}
		}

		std::cout << c << " ";

	}
}

void CGraph::obratnayaK8()
{
	_matrix = new int* [_vertexes+1];
	for (int i = 0; i <= _vertexes; i++)
	{
		_matrix[i] = new int[_vertexes+1];
	}

	for (int k = 0; k <= _vertexes; k++)
	{
		for (int l = 0; l <= _vertexes; l++)
		{
			_matrix[k][l] = 0;
		}
	}

	int a = 0, b = 0;
	for (int j = 1; j <= _vertexes; j++)
	{
		std::cin >> a;

	for (int i = 0; i < a; i++)
		{
			std::cin >> b;
			_matrix[j][b] = 1;

		}
	}
	

}

void CGraph::createMatrixFromEdges7()
{
	_matrix = new int* [_vertexes + 1];
		for (int i = 0; i < _vertexes + 1; i++)
		{
			_matrix[i] = new int[_vertexes + 1];
		}
	for (int i = 0; i < _edges; i++)
	{
			int v, l;
			std::cin >> v >> l;

			_matrix[v][l] = 1;
	}
}

void CGraph::task8()
{
	for (int i = 1; i <= _vertexes; i++)
	{
		int c = 0;
		for (int j = 1; j <= _vertexes; j++)
		{
			if (_matrix[i][j] == 1)
			{
				c++;
			}
		}

		std::cout << c << " ";

		for (int k = 1; k <= _vertexes; k++)
		{
			if (_matrix[i][k] == 1)
			{
				std::cout << k << " ";
			}
		}
		std::cout << std::endl;
	}
}

void CGraph::printMatrix1()
{
	for (int i = 1; i <= _vertexes; i++)
	{
		for (int j = 1; j <= _vertexes; j++)
		{
			std::cout << _matrix[i][j] << " ";
		}

		std::cout << std::endl;

	}
}

void CGraph::printMatrix()
{
	for (int i = 0; i < _vertexes; i++)
	{
		for (int j = 0; j < _vertexes; j++)
		{
			std::cout << _matrix[i][j] << " ";
		}

		std::cout << std::endl;

	}
}

void CGraph::getEdgesFromMatrix()
{
	for (int i = 0; i < _vertexes; i++)
	{
		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[i][j] == 1)
			{
				std::cout << i+1 << " " << j+1 <<std::endl;
			}
		}
	}
}

void CGraph::countOfPlanets()
{
	int* _mat;
	_mat = new int[_vertexes+1];

	int count = 0;

	for (int i = 0; i <= _vertexes; i++)
	{
		_mat[i] = 0;
	}

	for (int i = 1; i < _vertexes+1; i++)
	{
		for (int j = 1; j < _vertexes+1; j++)
		{
			for (int k = 1; k < _vertexes + 1; k++)
			{
				if ((_matrix[i][j] == 1) && (_matrix[j][k] == 1) && (_matrix[k][i] != 1) && (j!=k) && (j != i) && (i != k))
				{
					_mat[j]++;
				}

				if ((_matrix[i][j] == 1) && (_matrix[j][k] != 1) && (_matrix[k][i] == 1) && (j != k) && (j != i) && (i != k))
				{
					_mat[i]++;
				}

				if ((_matrix[i][j] != 1) && (_matrix[j][k] == 1) && (_matrix[k][i] == 1) && (j != k) && (j != i) && (i != k))
				{
					_mat[k]++;
				}
			}
		}

	}

	for (int i = 0; i <= _vertexes; i++)
	{
		if (_mat[i] != 0)
		{
			count++;
		}
	}

	std::cout << count;
	delete[]_mat;
}

void CGraph::createMatrixFromEdges()
{
	_matrix = new int* [_vertexes+1];
	for (int i = 0; i < _vertexes+1; i++)
	{
		_matrix[i] = new int[_vertexes+1];
	}

	for (int i = 0; i < _vertexes-1; ++i)
	{
		int l, v;
		std::cin >> l >> v;
		_matrix[l][v] = 1;
		_matrix[v][l] = 1;
		
	}
}

int CGraph::derevo()
{
	int A, B;
	std::cin >> A >> B;

	int na = 2, nb = 2;

	for (int i = 0; i <=A; i++)
	{
		if (A - pow(na, i) < pow(na, i))
		{
			na = i;
			break;
		}
	}

	for (int i = 0; i <= B; i++)
	{
		if (A - pow(nb, i) < pow(nb, i))
		{
			nb = i;
			break;
		}
	}

	double d1, d2 = 0;

	d1 = pow(2, na) / 2  - 0.5 + pow(2, na);
	d2 = pow(2, nb) / 2 - 0.5 + pow(2, nb);

	int V = 1;

	for (int i = 2; i < A + B; i++)
	{

		if ((A < d1) && (B < d2))
		{
			d1 = d1 - pow(2,na)/(pow(2,i));
			d2 = d2 - pow(2,nb)/(pow(2,i));
			V = V + 1;
		}

		if ((A > d1) && (B > d2))
		{
			d1 = d1 + pow(2, na) / (pow(2, i));
			d2 = d2 + pow(2, nb) / (pow(2, i));
			V = V + 2;

		}

		if ((A < d1) && (B > d2))
		{
			std::cout << V;
			return 0;
		}

		if ((A > d1) && (B < d2))
		{
			std::cout << V;
			return 0;
		}

	}

}

void CGraph::shtirlezBegaet()
{
	int m = 10000000;
	for (int i = 0; i < _vertexes; i++)
	{
		for (int j = 0; j < _vertexes; j++)
		{
			for (int l = 0; l < _vertexes; l++)
			{
				if ((m > _matrix[i][j] + _matrix[j][l] + _matrix[l][i]) && (j!=i) && (j != l) && (i != l))
				{
					m = _matrix[i][j] + _matrix[j][l] + _matrix[l][i];
				}
			}
		}
	}

	std::cout << m;

}

void CGraph::createColorMassiv()
{
	_color = new int [_vertexes+1];

	for (int i = 1; i <= _vertexes; i++)
	{
		std::cin >> _color[i];
	}
}

void CGraph::ploxieMosti()
{
	double count = 0;

	for (int i = 0; i < _vertexes; i++)
	{
		for (int j = 0; j < _vertexes; j++)
		{
			if (_matrix[i][j] != 0)
			{
				if ((_color[i+1] != _color[j+1]) && (_matrix[i][j] == _matrix[j][i]))
				{
					count = count + 0.5;
				}

				if ((_color[i + 1] != _color[j + 1]) && (_matrix[i][j] != _matrix[j][i]))
				{
					count++;
				}

			}
		}
		
	}

	std::cout << count;

}

void CGraph::set(int _vertexes)
{
	this->_vertexes = _vertexes;
}

void CGraph::set1(int _vertexes, int _edges)
{
	this->_vertexes = _vertexes;
	this->_edges = _edges;
}

void CGraph::CreateMatrix()
{
	_matrix = new int* [_vertexes];
	for (int i = 0; i < _vertexes; i++)
	{
		_matrix[i] = new int[_vertexes];
	}

	for (int i = 0; i < _vertexes; ++i)
	{
		for (int j = 0; j < _vertexes; ++j)
		{
			std::cin >> _matrix[i][j];
		}
	}
}

void CGraph::countOfSwetofor()
{
	int* N = new int[_vertexes +1];

	int a = 0;

	for (int i = 0; i <= _vertexes; i++)
	{
		N[i] = 0;
	}

	for (int i = 1; i <= _edges*2; i++)
	{
		std::cin >> a;
		N[a]++;
	}

	for (int i = 1; i <= _vertexes; i++)
	{
		std::cout << N[i] << " ";
	}
}

int CGraph::getEdgesCountFromMatrix()
{
	double count = 0;
	for (int i = 0; i < _vertexes; ++i)
	{
		for (int j = 0; j < _vertexes; ++j)
		{
			if (_matrix[i][j] != 0 && _matrix[j][i] != 0)
				count = count + 0.5;
			if (_matrix[i][j] != 0 && _matrix[j][i] == 0)
				count = count + 1;
		}
	}

	return count;
}