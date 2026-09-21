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

## [Image](image.md).alpha

Opacity channel of the tint; `setAlpha` keeps the RGB channels and only rewrites alpha. CharacterController pulses the portrait alpha for the damage flash while the team tint stays intact.

```cpp
void setAlpha(const float alpha);
float getAlpha() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/image/image-alpha.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/image/image-alpha.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
