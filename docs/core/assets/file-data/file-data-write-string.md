---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).writeString()

Writes the contents of `s` to the stream and returns the number of bytes written. The CharacterController save script uses it to store the tutorial checkpoint JSON in `saves/tutorial_slot0.json`.

```cpp
unsigned int writeString(const std::string& s);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-write-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-write-string.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
