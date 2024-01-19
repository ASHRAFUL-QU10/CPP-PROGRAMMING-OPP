#include <iostream>
using namespace std;

struct Node            //adjacency list 
{
	int val;
	Node* next;
};

struct Ver                  //vertices 
{
    int src, dest;
};

class Graph
{
	Node* getAdjListNode(int dest, Node* head)      // Function to allocate new node of Adjacency List
	{
		Node* newNode = new Node;
		newNode->val = dest;
		newNode->next = head;                        // point new node to current head
		return newNode;
	}

	int N;
    public:

	// An array of pointers to Node to represent
	// adjacency list
	Node **head;

	// Constructor
	Graph(Edge edges[], int n, int N)
	{
		// allocate memory
		head = new Node*[N]();
		this->N = N;

		// initialize head pointer for all vertices
		for (int i = 0; i < N; i++)
			head[i] = nullptr;

		// add edges to the directed graph
		for (unsigned i = 0; i < n; i++)
		{
			int src = edges[i].src;
			int dest = edges[i].dest;

			// insert in the beginning
			Node* newNode = getAdjListNode(dest, head[src]);

			// point head pointer to new node
			head[src] = newNode;

			// Uncomment below lines for undirected graph

			/*
			newNode = getAdjListNode(src, head[dest]);

			// change head pointer to point to the new node
			head[dest] = newNode;
			*/
		}
	}

	// Destructor
	~Graph() {
		for (int i = 0; i < N; i++)
			delete[] head[i];

		delete[] head;
	}
};

// print all neighboring vertices of given vertex
void printList(Node* ptr)
{
	while (ptr != nullptr)
	{
		cout << " -> " << ptr->val << " ";
		ptr = ptr->next;
	}
	cout << endl;
}

// Graph Implementation in C++ without using STL
int main()
{
	// array of graph edges as per above diagram.
	Edge edges[] =
	{
		// pair (x, y) represents edge from x to y
		{ 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
		{ 3, 2 }, { 4, 5 }, { 5, 4 }
	};

	// Number of vertices in the graph
	int N = 6;

	// calculate number of edges
	int n = sizeof(edges)/sizeof(edges[0]);

	// construct graph
	Graph graph(edges, n, N);

	// print adjacency list representation of graph
	for (int i = 0; i < N; i++)
	{
		// print given vertex
		cout << i << " --";

		// print all its neighboring vertices
		printList(graph.head[i]);
	}

	return 0;
}