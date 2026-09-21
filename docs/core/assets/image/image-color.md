[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
