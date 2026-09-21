[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Image
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Image](image.md).patchMarginLeft

9-patch left inset in pixels; corners narrower than this are never stretched. CharacterController widens it on the portrait frame so the team badge corner stays crisp.

```cpp
void setPatchMarginLeft(unsigned int marginLeft);
unsigned int getPatchMarginLeft() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-patch-margin-left.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-patch-margin-left.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
