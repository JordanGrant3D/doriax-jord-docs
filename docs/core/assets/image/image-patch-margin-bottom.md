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

## [Image](image.md).patchMarginBottom

9-patch bottom inset in pixels; corners shorter than this are never stretched. CharacterController widens it on the portrait frame so the status-bar corner stays crisp.

```cpp
void setPatchMarginBottom(unsigned int marginBottom);
unsigned int getPatchMarginBottom() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-patch-margin-bottom.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-patch-margin-bottom.h"
```
