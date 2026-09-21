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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
