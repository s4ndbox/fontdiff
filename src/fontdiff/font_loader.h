#ifndef FONTDIFF_FONT_LOADER_H_
#define FONTDIFF_FONT_LOADER_H_

#include <map>
#include <string>

namespace fontdiff {

class Font;
class FontCollection;

class FontLoader {
 public:
  FontLoader();
  ~FontLoader();
  Font* Load(const std::string& path);
  FontCollection* LoadCollection(const std::vector<std::string>& paths);

 private:
  static std::string GetSHA1(const std::string& filepath);
  std::map<std::string, Font*> fonts_;
};

}  // namespace fontdiff

#endif  // FONTDIFF_FONT_LOADER_H_