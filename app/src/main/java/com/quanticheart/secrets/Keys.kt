package com.quanticheart.secrets

object Keys {
    init {
        System.loadLibrary("native-lib")
    }

    external fun apiKey(): String
}