import CryptoSwift

let blowfish = try Blowfish(key: key, blockMode: GCM(iv: iv, mode: .combined), padding: .pkcs7) // Noncompliant: 64 bits block size