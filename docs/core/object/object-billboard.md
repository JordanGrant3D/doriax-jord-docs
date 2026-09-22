---
version: 0.7.1
status: untested # Options: untested, bot-tested, human-tested
---

---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).setBillboard() / isBillboard() / setFakeBillboard() / setCylindricalBillboard()

Makes an object face the camera. The 3-argument overload sets all flags at once, fake billboarding keeps the world offset, and cylindrical billboarding locks rotation to the Y axis.

```cpp
void setBillboard(bool billboard, bool fake, bool cylindrical);
void setBillboard(bool billboard);
bool isBillboard() const;
void setFakeBillboard(bool fakeBillboard);
bool isFakeBillboard() const;
void setCylindricalBillboard(bool cylindricalBillboard);
bool isCylindricalBillboard() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-billboard.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-billboard.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
