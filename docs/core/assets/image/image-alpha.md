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
