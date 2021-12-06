#include "VanBan.h"

VanBan::VanBan(string s)
{
    this->s = s;
    string temp;
    vector<string> ChocoPie;
    for (int i = 0; i < s.length(); i++)
    {
        temp += s[i];
        if (s[i] == ' ' || s[i] == ',')
        {
            vector<string> cau;
            if (temp == "\n" || temp == " " || temp == "." || temp == "!" || temp == "?")
            {
                temp = "";
                continue;
            }
            if (temp[0] >= 'A' && temp[0] <= 'Z') temp[0] += 32;
            temp.erase(temp.length() - 1);
            ChocoPie.push_back(temp);
            temp = "";
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '\n')
        {
            temp.erase(temp.length() - 1);
            ChocoPie.push_back(temp);
            tu.push_back(ChocoPie);
            ChocoPie.clear();
            temp = "";
        }
    }
}

int VanBan::DemSoCau()
{
    return tu.size();
}

vector<int> VanBan::DemSoTu()
{
    vector<int> temp;
    for (int i = 0; i < tu.size(); i++)
    {
        temp.push_back(tu[i].size());
    }
    return temp;
}

void VanBan::TimTuXuatHienNhieuNhat()
{
    vector<string> vec;
    for (int i = 0; i < tu.size(); i++)
    {
        for (int j = 0; j < tu[i].size(); j++)
        {
            vec.push_back(tu[i][j]);
        }
    }
    vector<int> soLuong(vec.size() + 1, 1);
    vector<string> khacNhau;
    khacNhau.push_back(vec[0]);
    for (int i = 1; i < vec.size(); i++)
    {
        bool appear = false;
        for (int j = 0; j < khacNhau.size(); j++)
        {
            if (khacNhau[j] == vec[i])
            {
                soLuong[j]++;
                appear = true;
                break;
            }
        }
        if (appear == false)
        {
            khacNhau.push_back(vec[i]);
        }
    }
    int mostAppear = soLuong[0];
    for (int i = 1; i < khacNhau.size(); i++)
    {
        if (mostAppear < soLuong[i]) mostAppear = soLuong[i];
    }
    for (int i = 0; i < khacNhau.size(); i++)
    {
        if (soLuong[i] == mostAppear) mostAppears.push_back(khacNhau[i]);
    }
}

void VanBan::Sort()
{
    for (int i = 0; i < tu.size(); i++)
    {
        for (int j = 0; j < tu[i].size() - 1; j++)
        {
            for (int k = j + 1; k < tu[i].size(); k++)
            {
                if (tu[i][j] > tu[i][k])
                    swap(tu[i][j], tu[i][k]);
            }
        }
    }
}


vector<vector<string>> VanBan::Get()
{
    return tu;
}
