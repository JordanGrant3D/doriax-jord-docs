---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
File
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [File](file.md).operator =()

Copies the file handle from another `File`. Both objects then refer to the same underlying `FILE*`. The CharacterController replay script uses it to hand an open `saves/tutorial_slot0.json` handle to a second reader.

```cpp
File& operator = ( const File& f );
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
