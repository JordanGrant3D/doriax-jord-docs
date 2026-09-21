---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).getPath()

Returns the source file path (clean path for `.svg` sources; see `svgScale`). For cube maps, `index` selects the face (`0` = front through `5` = down).

```cpp
std::string getPath(size_t index = 0) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-path.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-path.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
