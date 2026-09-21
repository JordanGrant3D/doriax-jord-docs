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
