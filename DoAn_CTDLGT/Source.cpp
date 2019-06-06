#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct DanhMucSach
{
	int MaSach;
	int TrangThai;
	string ViTri;
};

struct SachNode
{
	DanhMucSach sach;
	SachNode *next;
};
struct ListSach
{
	SachNode *head;
	SachNode *tail;
};
struct DauSach
{
	int ISBN;
	string TenSach;
	int SoTrang;
	string TacGia;
	int NamXuatBan;
	string TheLoai;
	ListSach *ListSach;
};


struct Date
{
	int d;
	int m;
	int y;
};



struct MuonTra
{
	int MaSach;
	int TrangThai;
	Date NgayMuon;
	Date NgayTra;
};
struct MuonTraNode
{
	MuonTra mt;
	MuonTraNode *next;
};
struct ListMuonTra
{
	MuonTraNode *head;
	MuonTraNode *tail;
};
struct DocGia
{
	int MaDocGia;
	string HoTen;
	string Phai;
	int TrangThaiThe;
	ListMuonTra *ListMuonTra;
};
struct TreeNode
{
	TreeNode *left;
	TreeNode *right;
	DocGia dg;
};

typedef struct TreeNode Tnode;

typedef Tnode* Tree;
int main()
{
	system("color 0a");




	system("pause");
}