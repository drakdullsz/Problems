#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

typedef std::pair <int, int> Segment;

bool sortbysec(const std::pair<int,int> &a, const std::pair<int,int> &b)
    {
        return (a.second < b.second);
    }

std::vector <int> get_covering_set(std::vector <Segment> segments) {
  std::vector <int> result;
  std::pair <int, int> sortd;
  sort(segments.begin(), segments.end(), sortbysec);

  int k=0;
  for (std::size_t i = 0; i < segments.size(); i++) {
      k = i;
      result.push_back(segments[i].second);
      while (segments[k].second >= segments[i+1].first && segments[k].second <= segments[i+1].second)
      {
            i++;
      }
  }

  return result;
}
int main(void) {
  int segments_count;
  std::cin >> segments_count;
  std::vector <Segment> segments(segments_count);
  for (int i = 0; i < segments_count; i++) {
    std::cin >> segments[i].first >> segments[i].second;
  }

  std::vector <int> points = get_covering_set(segments);
  std::cout << points.size() << std::endl;
  for (std::size_t i = 0; i < points.size(); i++) {
    std::cout << points[i] << " ";
  }
  std::cout << std::endl;
}
