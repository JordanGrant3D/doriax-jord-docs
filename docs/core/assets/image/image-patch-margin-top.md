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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
