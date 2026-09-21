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

## [Image](image.md).patchMarginTop

9-patch top inset in pixels; corners shorter than this are never stretched. CharacterController widens it on the portrait frame so the nameplate corner stays crisp.

```cpp
void setPatchMarginTop(unsigned int marginTop);
unsigned int getPatchMarginTop() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-patch-margin-top.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-patch-margin-top.h"
```
