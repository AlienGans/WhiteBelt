set<string> BuildMapValuesSet(const map<int, string>& m)
{
    set<string> s;
        for (const auto& it : m)
        {
            s.insert(it.second);
        }
    return s;
}

