---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Image
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Image](image.md).color

sRGB tint multiplied with the texture; `(1, 1, 1, 1)` renders the texture as-is. Stored linear internally, so `getColor` returns the sRGB form of the stored value. CharacterController tints the portrait sprite per team without needing separate textures.

```cpp
void setColor(Vector4 color);
void setColor(const float red, const float green, const float blue, const float alpha);
void setColor(const float red, const float green, const float blue);
Vector4 getColor() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-color.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-color.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
