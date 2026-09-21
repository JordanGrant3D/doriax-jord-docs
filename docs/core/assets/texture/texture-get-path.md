[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
